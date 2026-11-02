/* Module: vegas30.exe
   Function: ~A_Buffer
   Address: 0057ec80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall A_Buffer::~A_Buffer(void) */

void __thiscall A_Buffer::~A_Buffer(A_Buffer *this)

{
                    /* 0x17ec80  3  ??1A_Buffer@@QAE@XZ */
  ::A_Buffer::Cleanup(this);
  return;
}


