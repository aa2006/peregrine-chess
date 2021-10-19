/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */

#include <init.h>
#include <board.h>
#include <bitboard.h>
#include <hashkeys.h>
#include <attacks.h>
#include <move.h>
#include <movegen.h>

#define TEST_FENW "rnbqkb1r/pp1p1pPp/8/2p1pP2/1P1P4/3P3P/P1P1P3/RNBQKBNR w KQkq e6 0 1"
#define TEST_FENB "rnbqkbnr/p1p1p3/3p3p/1p1p4/2P1Pp2/8/PP1P1PpP/RNBQKB1R b KQkq e3 0 1"
#define TEST_FEN_JUMPERS "5k2/1n6/4n3/6N1/8/3N4/8/5K2 w - - 0 1"
#define TEST_FEN_ROOKS "6k1/8/5r2/8/1nR5/5N2/8/6K1 w - - 0 1"
#define TEST_FEN_QUEENS "6k1/1b6/4n3/8/1nQ5/5N2/1N6/6K1 w - - 0 1"
#define TEST_FEN_BISHOPS "6k1/1b6/4n3/8/1n4B1/1B3N2/1N6/2b3K1 b - - 0 1"

int main(void) {
  init_all();

  BOARD board[1];

  parse_fen(TEST_FEN_QUEENS, board);
  print_board(board);

  printf("\n\n");

  MOVELIST list[1];

  generate_all_moves(board, list);
}
