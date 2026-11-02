/* Module: sfpaplug.dll
   Function: FUN_00407c60
   Address: 00407c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __thiscall FUN_00407c60(void *this,uint *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint local_8;
  uint local_4;
  
  piVar1 = *(int **)((int)this + 0xd8);
  iVar6 = 0;
  local_8 = 0;
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar4 = *(uint *)((int)this + 0x40);
    uVar5 = *(uint *)((int)this + 0x44);
    if (0 < *piVar1) {
      piVar7 = (int *)piVar1[2];
      do {
        puVar2 = (uint *)*piVar7;
        if (puVar2 != (uint *)0x0) {
          uVar3 = puVar2[1];
          if (((int)param_1[1] < (int)uVar3) ||
             (((int)param_1[1] <= (int)uVar3 && (*param_1 < *puVar2)))) break;
          uVar4 = puVar2[2];
          uVar5 = puVar2[3];
          local_8 = *puVar2;
          local_4 = uVar3;
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar6 < *piVar1);
    }
  }
  *param_1 = local_8;
  param_1[1] = local_4;
  return CONCAT44(uVar5,uVar4);
}


