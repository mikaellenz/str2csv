



THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

String to CSV converter - http://lenz.sdf-eu.org/
Program extracts text between ['print_from_pattern'] and ['print_to_pattern'].
You can use multiple and different patterns to find.
Arguments count to program, and input string size limited by command-line length maximum.

Compilation:

1 - Run "make"
2 - Copy "str2csv" binary file somewhere, where you store bin files.

Usage: ./str2csv ['pattern_to_find'] ['print_from_pattern'] ['print_to_pattern'] ... ['str']
Example: ./str2csv '<Market' '>' '</Market>' '<Market>No beer</Market>'                
Output: No beer;

