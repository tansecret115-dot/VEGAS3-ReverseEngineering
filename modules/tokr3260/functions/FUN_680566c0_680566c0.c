/* Module: tokr3260.dll
   Function: FUN_680566c0
   Address: 680566c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_680566c0(int param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_1c;
  int local_18;
  uint local_8;
  
  iVar5 = param_1;
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 4);
  iVar6 = *(int *)(param_1 + 0x10);
  local_1c = (iVar2 + -1 + param_3) / iVar2;
  if (iVar6 == 1) {
    iVar6 = 0;
    param_1 = local_1c;
    if (0 < local_1c) {
      do {
        iVar7 = iVar2 + iVar6;
        if (param_3 < iVar2 + iVar6) {
          iVar7 = param_3;
        }
        uVar4 = FUN_68057660((uint *)(param_2 + iVar6 * 4),iVar7 - iVar6,iVar3);
        puVar1 = (uint *)(*(int *)(iVar5 + 0x1c) + uVar4 * 8);
        FUN_68058a40(*puVar1,puVar1[1],param_4,param_5);
        param_1 = param_1 + -1;
        iVar6 = iVar7;
      } while (param_1 != 0);
      return 0;
    }
  }
  else {
    if (iVar6 < 2) {
      return 0xfff0bdc1;
    }
    local_18 = 0;
    local_8 = 0;
    if (8 < iVar6) {
      assert(s_Anpacks_<__8_6805c2cf + 1,s_coder_encode_at2_c_6805c2dc,0x14b);
    }
    iVar5 = 0;
    if (0 < local_1c) {
      do {
        iVar7 = iVar2 + iVar5;
        if (param_3 < iVar2 + iVar5) {
          iVar7 = param_3;
        }
        uVar4 = FUN_68057660((uint *)(param_2 + iVar5 * 4),iVar7 - iVar5,iVar3);
        (&DAT_6805f068)[local_18] = uVar4;
        local_8 = local_8 | uVar4;
        local_18 = local_18 + 1;
        if (local_18 == iVar6) {
          if (local_8 == 0) {
            FUN_68058a40(0,1,param_4,param_5);
          }
          else {
            FUN_68058a40(1,1,param_4,param_5);
            local_18 = 0;
            if (0 < iVar6) {
              piVar8 = &DAT_6805f068;
              iVar5 = iVar6;
              do {
                FUN_68058a40(*(uint *)(*(int *)(param_1 + 0x1c) + *piVar8 * 8),
                             *(int *)(*(int *)(param_1 + 0x1c) + 4 + *piVar8 * 8),param_4,param_5);
                piVar8 = piVar8 + 1;
                iVar5 = iVar5 + -1;
                local_18 = iVar6;
              } while (iVar5 != 0);
            }
            local_8 = 0;
          }
        }
        local_1c = local_1c + -1;
        iVar5 = iVar7;
      } while (local_1c != 0);
    }
  }
  return 0;
}


