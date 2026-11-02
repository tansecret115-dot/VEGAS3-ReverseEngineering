/* Module: sfpaplug.dll
   Function: FUN_00403aa0
   Address: 00403aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00403aa0(int param_1,int param_2,int param_3,int param_4,uint *param_5,byte *param_6)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int local_68;
  int local_60 [24];
  
  local_68 = 0;
  if (0 < param_4) {
    piVar9 = local_60;
    iVar8 = 1 - (int)param_6;
    do {
      iVar3 = ftol();
      bVar2 = (byte)(iVar3 >> 0x1f);
      *piVar9 = iVar3;
      bVar2 = ((byte)iVar3 ^ bVar2) - bVar2;
      *param_6 = bVar2;
      if (iVar3 < 0) {
        *param_6 = bVar2 | 0x80;
      }
      piVar9 = piVar9 + 1;
      param_6 = param_6 + 1;
    } while ((int)(param_6 + iVar8) <= param_4);
  }
  if (0 < param_4) {
    puVar5 = param_5;
    iVar8 = param_4;
    do {
      uVar4 = *(uint *)((param_1 - (int)param_5) + (int)puVar5);
      *puVar5 = uVar4;
      puVar5 = puVar5 + 1;
      local_68 = local_68 + ((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f));
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (param_4 < param_2) {
    piVar9 = (int *)(param_1 + param_4 * 4);
    iVar8 = (int)param_5 - param_1;
    param_5 = (uint *)(param_2 - param_4);
    do {
      iVar3 = 0;
      if (0 < param_4) {
        piVar7 = local_60;
        iVar10 = param_4;
        piVar6 = piVar9;
        do {
          piVar6 = piVar6 + -1;
          iVar1 = *piVar7;
          piVar7 = piVar7 + 1;
          iVar3 = iVar3 + iVar1 * *piVar6;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      uVar4 = (iVar3 >> 5) + *piVar9;
      *(uint *)(iVar8 + (int)piVar9) = uVar4;
      piVar9 = piVar9 + 1;
      local_68 = local_68 + ((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f));
      param_5 = (uint *)((int)param_5 + -1);
    } while (param_5 != (uint *)0x0);
  }
  return local_68;
}


