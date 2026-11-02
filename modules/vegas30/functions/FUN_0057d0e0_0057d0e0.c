/* Module: vegas30.exe
   Function: FUN_0057d0e0
   Address: 0057d0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_0057d0e0(int param_1)

{
  short sVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined4 local_8;
  HGLOBAL local_4;
  
  local_4 = (HGLOBAL)0x0;
  local_8 = 0x50103;
  local_4 = GlobalAlloc(0x42,6);
  if (local_4 == (HGLOBAL)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    puVar2 = GlobalLock(local_4);
    if (puVar2 == (undefined2 *)0x0) {
      uVar3 = 0x80004005;
    }
    else {
      *puVar2 = 4;
      *(undefined4 *)(puVar2 + 1) = 0;
      GlobalUnlock(local_4);
      sVar1 = FUN_0057d600(param_1 + 0x14,param_1 + 0xb0,1,1,6,&local_8);
      uVar3 = -(uint)(sVar1 != 0) & 0x80004005;
    }
  }
  if (local_4 != (HGLOBAL)0x0) {
    GlobalFree(local_4);
  }
  return uVar3;
}


