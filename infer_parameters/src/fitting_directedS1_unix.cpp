
/*
 *
 * Provides the functions related to UNIX operating system.
 *
 * Author:  Antoine Allard
 * WWW:     antoineallard.info
 * Date:    May 2018
 *
 * To compile (from the root repository of the project):
 *   g++ -O3 -std=c++14 src/fitting_directedS1_unix.cpp -o fitting_directedS1
 *
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 */

#include "fitting_directedS1_unix.hpp"

int main(int argc , char *argv[])
{
  // Initialize graph object.
  fitting_directedS1_t the_graph;

  // Parses and sets options.
  parse_options(argc, argv, the_graph);

  // Performs the embedding.
  the_graph.fit();

  // Returns successfully.
  return EXIT_SUCCESS;
}
