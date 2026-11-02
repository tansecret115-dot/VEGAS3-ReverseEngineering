/* Module: sfcdi.dll
   Function: FUN_5bf204c0
   Address: 5bf204c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf204c0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar2 = param_1;
  for (iVar3 = 0x764; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = 1;
  param_1[1] = 1;
  param_1[3] = 1;
  iVar3 = FUN_5bf2bd00(param_1 + 3);
  if (iVar3 == 0) {
    uVar1 = FUN_5bf2bb90((int)param_1);
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        puVar2 = (undefined4 *)FUN_5bf2bbb0((int)param_1,uVar4);
        uVar4 = uVar4 + 1;
        for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
      } while (uVar4 < uVar1);
    }
    puVar2 = (undefined4 *)FUN_5bf2bbb0((int)param_1,0);
    puVar2[4] = 0;
    puVar2[5] = 0x96;
    iVar3 = *(int *)(param_2 + 4);
    puVar2[6] = iVar3;
    *puVar2 = 1;
    puVar2[0x11] = 0;
    puVar2[2] = 4;
    puVar2[3] = 1;
    param_1[0x763] = iVar3 + 0x96;
    puVar2[0x10] = 1;
    iVar3 = FUN_5bf2bdc0(puVar2 + 0x10);
    if (iVar3 == 0) {
      *(undefined4 *)puVar2[0x11] = puVar2[5];
      iVar3 = 0;
    }
  }
  return iVar3;
}


