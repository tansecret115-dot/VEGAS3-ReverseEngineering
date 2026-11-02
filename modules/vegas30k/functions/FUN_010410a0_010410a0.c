/* Module: vegas30k.dll
   Function: FUN_010410a0
   Address: 010410a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_010410a0(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar7;
  int unaff_EDI;
  int iVar8;
  undefined4 *puVar9;
  uint unaff_retaddr;
  int local_14;
  int local_10;
  undefined1 local_c [8];
  undefined4 *puStack_4;
  
  local_14 = param_3;
  iVar8 = 0;
  local_10 = 0;
  if (param_4 < 1) {
    return 0;
  }
  do {
    uVar1 = *(ushort *)(param_1 + 0x14);
    param_3 = 0;
    (**(code **)(**(int **)(param_1 + 0x68) + 0x74))(*(int **)(param_1 + 0x68),&param_3,local_c);
    uVar2 = unaff_EBX / *(ushort *)(param_1 + 0x14);
    if ((int)(unaff_retaddr - iVar8) <= (int)uVar2) {
      uVar2 = unaff_retaddr - iVar8;
    }
    if (unaff_retaddr == 0xfffffffe) {
      _SfAudio_FillSilence_12(param_1 + 8,puStack_4,uVar2);
      unaff_EDI = iVar8;
      unaff_retaddr = uVar2;
    }
    else {
      uVar3 = *(ushort *)(param_1 + 0x14) * uVar2;
      puVar7 = (undefined4 *)((uint)uVar1 * iVar8 + param_2);
      puVar9 = puStack_4;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    iVar5 = *(int *)(param_1 + 0x8c);
    local_10 = unaff_EBP >> 0x1f;
    iVar8 = unaff_EDI + uVar2;
    if (iVar5 == 0) {
      iVar5 = 0;
      piVar6 = (int *)0x0;
    }
    else {
      *(undefined4 *)(param_1 + 0x90) = 1;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      piVar6 = &local_14;
    }
    local_14 = unaff_EBP;
    (**(code **)(**(int **)(param_1 + 0x68) + 0x7c))
              (*(int **)(param_1 + 0x68),puStack_4,*(ushort *)(param_1 + 0x14) * uVar2,piVar6,iVar5)
    ;
    local_14 = local_14 + uVar2;
    unaff_EDI = iVar8;
  } while (iVar8 < param_4);
  return 0;
}


