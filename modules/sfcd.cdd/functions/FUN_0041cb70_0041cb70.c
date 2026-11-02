/* Module: sfcd.cdd
   Function: FUN_0041cb70
   Address: 0041cb70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041cb70(HSFCD__ *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_40;
  byte local_3b;
  int local_38;
  uint local_34;
  undefined4 local_24;
  uint uStack_1f;
  
  FUN_004194f0((undefined4 *)param_1);
  iVar2 = FUN_0041c9a0(param_1,&local_24);
  if (iVar2 == 0) {
    uVar5 = 0;
    uVar1 = (uStack_1f >> 8 & 0xff) - 1;
    *param_2 = uStack_1f & 0xff;
    param_2[1] = uVar1;
    iVar2 = uVar1 - (uStack_1f & 0xff);
    if (iVar2 != -1) {
      do {
        piVar3 = (int *)FUN_0041f490((int)param_2,uVar5);
        uVar1 = *param_2;
        *piVar3 = uVar1 + uVar5;
        iVar4 = FUN_0041ca40(param_1,&local_40,(char)(uVar1 + uVar5));
        if (iVar4 != 0) {
          return iVar4;
        }
        piVar3[2] = local_3b & 0xf;
        piVar3[5] = local_38;
        if ((local_3b & 4) == 0) {
          piVar3[3] = 0;
        }
        else {
          piVar3[3] = 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < iVar2 + 1U);
    }
    iVar2 = FUN_0041ca40(param_1,&local_40,0xff);
    if (iVar2 == 0) {
      param_2[0x763] = local_34;
      iVar2 = 0;
    }
  }
  return iVar2;
}


