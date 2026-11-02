/* Module: g2plug.dll
   Function: FUN_5f8139a0
   Address: 5f8139a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f8139a0(void *this,HWND param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_220 [136];
  
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  if (param_2 < 0x54) {
    if (param_2 == 0x53) {
      FUN_5f8112a0(param_1,param_4,(int *)&DAT_5f86b560);
      return 1;
    }
    if (param_2 == 2) {
      FUN_5f814610();
      *(undefined4 *)((int)this + 0x10) = 0;
      return 1;
    }
    if ((param_2 == 0x18) && (param_3 != 0)) {
      FUN_5f813740(this,param_1);
      return 0;
    }
  }
  else {
    if (param_2 == 0x110) {
      return 1;
    }
    if (param_2 == 0x111) {
      uVar2 = param_3 & 0xffff;
      if (uVar2 < 0x3fb) {
        if (uVar2 == 0x3fa) {
          *(uint *)(iVar1 + 0x158) = (uint)(*(int *)(iVar1 + 0x158) == 0);
          *(undefined4 *)((int)this + 0x24) = 1;
          return 0;
        }
        if (uVar2 < 0x3ee) {
          if (uVar2 < 0x3ea) {
            if (uVar2 == 9) {
              return 1;
            }
          }
          else if ((short)(param_3 >> 0x10) == 0x300) {
            *(undefined4 *)((int)this + 0x24) = 1;
            return 0;
          }
        }
        else if (uVar2 == 0x3f9) {
          *(uint *)(iVar1 + 0x154) = (uint)(*(int *)(iVar1 + 0x154) == 0);
          *(undefined4 *)((int)this + 0x24) = 1;
          return 0;
        }
      }
      else if (uVar2 == 0x3fb) {
        *(uint *)(iVar1 + 0x15c) = (uint)(*(int *)(iVar1 + 0x15c) == 0);
        *(undefined4 *)((int)this + 0x24) = 1;
      }
      else if (uVar2 == 0x404) {
        puVar4 = (undefined4 *)(iVar1 + 0x437);
        puVar5 = local_220;
        for (iVar3 = 0x88; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar3 = FUN_5f816a00(DAT_5f87746c,(LPCSTR)0x7532,param_1,(DLGPROC)&LAB_5f8137f0,
                             (LPARAM)local_220);
        if (iVar3 == 1) {
          puVar4 = local_220;
          puVar5 = (undefined4 *)(iVar1 + 0x437);
          for (iVar3 = 0x88; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          *(undefined4 *)((int)this + 0x24) = 1;
          return 0;
        }
      }
    }
  }
  return 0;
}


