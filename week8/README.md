## Week 8
The focus for this week is to learn about the C++ Standard Template Library (STL) so as to enable more capabilities within future programming projects.

#### Activity 1 - `deque`
Similar to a `vector` or the `stack` from C, but you have access to both ends..

Is it possible to create a deque of deques that hold `ints`?

**Well**, There was a code snippet provided on the worksheet:

```c++
  deque<float> floatdq(5, 1.2f);

  for(int i=0;i<5;i++)
  {
    cout << "contents of cell " << i << " are "
         << floatdq[i] << " using [] access operator" << endl;
    cout << "contents of cell " << i << " are "
         << floatdq.at(i) << " using the at() function" << endl;
  }
```
I have utilized this code to test this.  With a few edits, But the answer is yes!

#### Activity 2
Write code to swap the first and last element of a `deque`.

#### Activity 3
Write a small function using the push and pop functions that return a `deque` which is the reverse of a given `deque`... TODO.

#### Activity 4
