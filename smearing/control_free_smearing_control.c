#include "control.ih"

void free_smearing_control(smearing_control *control)
{
  switch (control->type)
  {
    case Identity:
      free_identity_control((identity_control*)(control->type_control));
      break;
    case APE:
      free_ape_control((ape_control*)(control->type_control));
      break;
    case HYP:
      free_hyp_control((hyp_control*)(control->type_control));
      break;
    case Stout:
      free_stout_control((stout_control*)(control->type_control));
      break;
  }
  free(control); 
}
