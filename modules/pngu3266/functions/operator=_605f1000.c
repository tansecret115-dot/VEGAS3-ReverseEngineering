/* Module: pngu3266.dll
   Function: operator=
   Address: 605f1000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNPtrArray & __thiscall CPNPtrArray::operator=(class CPNPtrArray const &) */

CPNPtrArray * __thiscall CPNPtrArray::operator=(CPNPtrArray *this,CPNPtrArray *param_1)

{
                    /* 0x1000  483  ??4CPNPtrArray@@QAEAAV0@ABV0@@Z
                       0x1000  505  ??4CPNxRect@@QAEAAV0@ABV0@@Z
                       0x1000  564  ??4_PNxRect@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}


