/* Module: mp3plug.dll
   Function: FUN_5f687a40
   Address: 5f687a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5f687a40(int *param_1)

{
  HGLOBAL hMem;
  LPVOID this;
  undefined4 *this_00;
  
  if (param_1 == (int *)0x0) {
    return (undefined4 *)0x0;
  }
  hMem = GlobalAlloc(0x40,0xc08);
  this = GlobalLock(hMem);
  if (this != (LPVOID)0x0) {
    this_00 = FUN_5f71e2c0(this,*param_1,(HKEY__)param_1[1],(uchar *)param_1[2],param_1 + 3,
                           (int)(param_1 + 10),param_1[0x10],param_1[0x11],param_1[0x12],
                           param_1[0x13],param_1[0x14],(uchar *)0x0,(uchar *)param_1[0x15]);
    if ((this_00 != (undefined4 *)0x0) && (param_1[0x16] != 0)) {
      FUN_5f71ebf0(this_00,param_1[0x16]);
    }
    return this_00;
  }
  return (undefined4 *)0x0;
}


