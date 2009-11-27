/***********************************************************************
 * $Id$
 * Copyright (C) 2002,2003,2004,2005,2006,2007,2008 Carsten Urbach
 *
 * This file is part of tmLQCD.
 *
 * tmLQCD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * tmLQCD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with tmLQCD.  If not, see <http://www.gnu.org/licenses/>.
 ***********************************************************************/

#ifndef _SPINOR_H
#define _SPINOR_H

#include <su3.h>

#include <io/selector.h>
#include <io/utils.h>

void read_spinor(spinor * const s, spinor * const r, char * filename, const int position);
void read_binary_spinor_data(spinor * const s, spinor * const r, READER * reader, DML_Checksum * checksum);

void write_spinor_info(WRITER * writer, paramsXlfInfo * xlfInfo, const int write_prop_format_flag, paramsInverterInfo * InverterInfo, char * gaugelfn, DML_Checksum const * gaugecksum);
void write_spinor(WRITER * writer, spinor ** const s, spinor ** const r, const int flavours, const int prec);
void write_binary_spinor_data(spinor * const s, spinor * const r, WRITER * writer, DML_Checksum *checksum, int const prec);

void write_source_format(WRITER *writer, paramsSourceFormat const *format);
void write_propagator_format(WRITER *writer, paramsPropagatorFormat const *format);
void write_propagator_type(WRITER *writer, const int type);

#endif
