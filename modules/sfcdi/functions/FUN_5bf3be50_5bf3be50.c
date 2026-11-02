/* Module: sfcdi.dll
   Function: FUN_5bf3be50
   Address: 5bf3be50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3be50(undefined4 *param_1,LPCSTR param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_8 [2];
  
  puVar3 = param_1;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar2 = FUN_5bf46710(4,0x20000,param_1);
  if ((-1 < iVar2) &&
     (iVar2 = FUN_5bf46410((undefined4 *)*param_1,param_2,(LPCSTR)0x0,0,-1,(undefined4 *)0xffffffff,
                           4), -1 < iVar2)) {
    FUN_5bf46370((int *)*param_1,local_8);
    param_1[3] = 0x10000;
    param_1[7] = local_8[0];
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[1] = 0xffffffff;
    param_1[2] = 0xffffffff;
    hMem = GlobalAlloc(0x42,0x10000);
    pvVar1 = GlobalLock(hMem);
    param_1[6] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      return iVar2;
    }
    return -0x7ff8fff2;
  }
  FUN_5bf3bdf0(param_1);
  return iVar2;
}


