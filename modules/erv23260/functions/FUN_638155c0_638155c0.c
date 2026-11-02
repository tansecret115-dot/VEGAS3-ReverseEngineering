/* Module: erv23260.dll
   Function: FUN_638155c0
   Address: 638155c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_638155c0(void *this,ushort *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6
            ,uint *param_7,uint *param_8)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int local_10;
  int local_c;
  
  *param_8 = 0;
  *param_7 = 0;
  uVar8 = (int)param_1 + 3U & 0xfffffffc;
  local_10 = 0x7fffffff;
  for (uVar6 = param_2 + 3U & 0xfffffffc; (int)uVar6 < param_4; uVar6 = uVar6 + 4) {
    if ((int)uVar8 < param_3) {
      uVar10 = uVar8;
      do {
        local_c = 8;
        param_1 = (ushort *)
                  (*(int *)((int)this + 0xf4) +
                  (*(int *)((int)this + 0xfc) * ((int)uVar6 >> 2) + ((int)uVar10 >> 1)) * 2);
        iVar9 = 0;
        puVar5 = (ushort *)
                 (*(int *)((int)this + 0xf8) +
                 (*(int *)((int)this + 0x100) * ((int)uVar6 >> 1) + ((int)uVar10 >> 2)) * 2);
        piVar7 = param_5;
        do {
          uVar2 = (uint)*param_1 - *(int *)((param_6 - (int)param_5) + -4 + (int)(piVar7 + 1));
          uVar3 = (int)uVar2 >> 0x1f;
          uVar1 = *puVar5;
          uVar4 = (int)((uint)uVar1 - *piVar7) >> 0x1f;
          puVar5 = puVar5 + *(int *)((int)this + 0x100);
          iVar9 = iVar9 + ((uVar3 ^ uVar2) - uVar3) + ((uVar4 ^ (uint)uVar1 - *piVar7) - uVar4);
          param_1 = param_1 + 1;
          local_c = local_c + -1;
          piVar7 = piVar7 + 1;
        } while (local_c != 0);
        if (iVar9 < local_10) {
          *param_7 = uVar10;
          *param_8 = uVar6;
          local_10 = iVar9;
        }
        uVar10 = uVar10 + 4;
      } while ((int)uVar10 < param_3);
    }
  }
  return;
}


