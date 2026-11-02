/* Module: sfcdi.dll
   Function: FUN_5bf10f10
   Address: 5bf10f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf10f10(HANDLE param_1)

{
  HANDLE pvVar1;
  uint uVar2;
  DWORD local_8;
  undefined1 local_4 [4];
  
  pvVar1 = param_1;
  FUN_5bf33d00(param_1,&local_8);
  uVar2 = FUN_5bf34200(pvVar1,local_4,(int *)&param_1);
  if (uVar2 == 0) {
    param_1 = (HANDLE)((int)param_1 + 4);
    FUN_5bf33d20(pvVar1,local_8);
    FUN_5bf34110(pvVar1,0x4b4e554a,(DWORD)param_1);
  }
  return;
}


