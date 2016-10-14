/* -*- c++ -*- */
/*
 * gr-outernet GNUradio OOT module for Outernet
 *
 * Copyright 2016 Daniel Estevez <daniel@destevez.net>.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef INCLUDED_OUTERNET_SWAP_FF_IMPL_H
#define INCLUDED_OUTERNET_SWAP_FF_IMPL_H

#include <outernet/swap_ff.h>

namespace gr {
  namespace outernet {

    class swap_ff_impl : public swap_ff
    {
     private:
      // Nothing to declare in this block.

     public:
      swap_ff_impl();
      ~swap_ff_impl();

      // Where all the action really happens
      int work(int noutput_items,
         gr_vector_const_void_star &input_items,
         gr_vector_void_star &output_items);
    };

  } // namespace outernet
} // namespace gr

#endif /* INCLUDED_OUTERNET_SWAP_FF_IMPL_H */

