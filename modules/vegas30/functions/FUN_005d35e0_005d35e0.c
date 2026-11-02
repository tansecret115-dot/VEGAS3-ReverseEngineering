/* Module: vegas30.exe
   Function: FUN_005d35e0
   Address: 005d35e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005d35e0(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  HRESULT HVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  int local_8d0;
  undefined1 local_8cc [276];
  uint local_7b8;
  uint local_7b4;
  undefined4 auStack_7a4 [128];
  uint local_5a4 [130];
  uint local_39c;
  IStream *local_36c;
  int aiStack_368 [198];
  int iStack_50;
  void *pvStack_4c;
  int *piStack_c;
  
  iVar2 = FUN_005d26e0(param_1,local_8cc);
  if (iVar2 < 0) {
    return iVar2;
  }
  local_39c = param_2;
  if (param_3 == 4) {
    if (local_7b8 <= param_2) {
      return 1;
    }
    if (param_2 == 0) {
      return 1;
    }
    uVar5 = local_7b8 - 1;
    if (param_2 != uVar5) {
      param_2 = param_2 + 1;
      HVar4 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_36c);
      if (HVar4 < 0) {
        return HVar4;
      }
      local_8d0 = local_7b8 - param_2;
      HVar4 = (*local_36c->lpVtbl->Write)(local_36c,&local_8d0,4,(ULONG *)0x0);
      if (HVar4 < 0) {
        return HVar4;
      }
      if (param_2 < local_7b8) {
        puVar8 = auStack_7a4 + param_2;
        do {
          piVar11 = aiStack_368;
          for (iVar2 = 0xda; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar11 = 0;
            piVar11 = piVar11 + 1;
          }
          FUN_005e7df0(4,param_2,*puVar8,0);
          aiStack_368[1] = aiStack_368[1] + -1;
          iStack_50 = iStack_50 + -1;
          iVar2 = FUN_005e8430(local_36c,0,0);
          if (iVar2 < 0) break;
          if (pvStack_4c != (void *)0x0) {
            free(pvStack_4c);
          }
          if (piStack_c != (int *)0x0) {
            (**(code **)(*piStack_c + 8))(piStack_c);
          }
          param_2 = param_2 + 1;
          puVar8 = puVar8 + 1;
        } while (param_2 < local_7b8);
      }
      uVar5 = local_7b8 - 1;
    }
    uVar7 = 0;
    if (local_7b4 != 0) {
      puVar6 = local_5a4;
      do {
        uVar1 = *puVar6;
        if (uVar1 == local_39c) {
          *puVar6 = 0;
        }
        else if (local_39c < uVar1) {
          *puVar6 = uVar1 - 1;
        }
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar7 < local_7b4);
    }
    uVar9 = 1;
    uVar3 = 0xc9;
    uVar10 = 0x1a;
    local_7b8 = uVar5;
  }
  else {
    if (param_3 != 5) {
      return 1;
    }
    if (local_7b4 <= param_2) {
      return 1;
    }
    uVar9 = 4;
    local_7b4 = local_7b4 - 1;
    uVar10 = 0x20;
    uVar3 = 0x137;
  }
  if (param_4 != 0) {
    FUN_004e9f70(param_1,uVar3,0);
    FUN_004ea590(param_1,uVar9,local_39c,uVar10);
  }
  if (param_3 == 4) {
    FUN_004c3f90(DAT_00647630,local_39c,local_7b8);
  }
  else if (param_3 == 5) {
    FUN_004c4080(DAT_00647630,local_39c,local_7b4 + 1);
  }
  iVar2 = FUN_005d2700(param_1,local_8cc,0,0);
  if (param_4 != 0) {
    if (-1 < iVar2) {
      FUN_004eb2b0(param_1);
    }
    FUN_004ea040(param_1,iVar2 < 0);
  }
  return iVar2;
}


