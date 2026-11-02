/* Module: vidcap30.exe
   Function: FUN_0046b160
   Address: 0046b160
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_0046b160(undefined4 *param_1,int *param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int *piVar2;
  undefined4 unaff_ESI;
  int local_4;
  
  local_4 = 0;
  hMem = GlobalAlloc(0x40,0x1f0);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_0046cea0("sfreader",param_1,&local_4);
    if (piVar2 != (int *)0x0) {
      if (local_4 < 0) {
LAB_0046b1e1:
        (**(code **)(*piVar2 + 0xc))(1);
        *param_1 = unaff_ESI;
        return (int *)0x0;
      }
      local_4 = _SfList_CreateExZ_32(piVar2 + 0x4b,4,0xffffffff,0xffffffff,0x80000000,0,0,0);
      if (local_4 < 0) goto LAB_0046b1e1;
      goto LAB_0046b1d0;
    }
  }
  local_4 = -0x7ff8fff2;
LAB_0046b1d0:
  *param_2 = local_4;
  return piVar2;
}


