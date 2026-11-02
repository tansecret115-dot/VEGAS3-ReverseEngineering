/* Module: pngu3266.dll
   Function: ~CPNCustomFrame
   Address: 6060309e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNCustomFrame::~CPNCustomFrame(void) */

void __thiscall CPNCustomFrame::~CPNCustomFrame(CPNCustomFrame *this)

{
                    /* 0x1309e  322  ??1CPNCustomFrame@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x1c))(1);
  }
  *(undefined4 *)(this + 0x1c) = 0;
  if (*(undefined4 **)(this + 0x20) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x20))(1);
  }
  *(undefined4 *)(this + 0x20) = 0;
  if (*(int *)(this + 0x10) != 0) {
    (**(code **)(**(int **)(this + 8) + 0x120))(*(int *)(this + 0x10));
  }
  *(undefined4 *)(this + 0x10) = 0;
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
  }
  *(undefined4 *)(this + 0x18) = 0;
  if (*(undefined4 **)(this + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xc))(1);
  }
  *(undefined4 *)(this + 0xc) = 0;
  CPNObject::~CPNObject((CPNObject *)this);
  return;
}


