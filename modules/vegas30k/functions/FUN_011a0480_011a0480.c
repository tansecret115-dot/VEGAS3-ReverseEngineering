/* Module: vegas30k.dll
   Function: FUN_011a0480
   Address: 011a0480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __thiscall
FUN_011a0480(int param_1,undefined4 *param_2,int param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,undefined4 param_8,uint param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint unaff_EBX;
  uint unaff_EBP;
  int unaff_ESI;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x580) != 0) {
    *(undefined4 *)(param_1 + 0x580) = 0;
  }
  local_10 = param_5;
  local_c = param_6;
  local_18 = 0;
  local_14 = 0;
  if ((-1 < param_10) && ((local_20 = param_1, 0 < param_10 || (param_9 != 0)))) {
    do {
      uVar2 = local_18;
      uVar3 = param_9;
      param_5 = 0;
      iVar5 = *(ushort *)(param_3 + 0xc) * local_18;
      (**(code **)(**(int **)(local_20 + 0x4b8) + 0x74))
                (*(int **)(local_20 + 0x4b8),&param_5,&local_1c);
      if ((uVar3 == 0xfffffffe) && (param_7 == 0xffffffff)) {
        _SfAudio_FillSilence_12(param_3,param_2,param_4);
        param_6 = param_4;
        param_7 = param_5;
        uVar7 = param_4;
        uVar3 = param_5;
      }
      else {
        uVar1 = unaff_EBP / *(ushort *)(param_3 + 0xc);
        uVar7 = uVar3 - uVar2;
        uVar3 = (param_7 - local_20) - (uint)(uVar3 < uVar2);
        if ((uVar3 < 0x80000000) && ((0 < (int)uVar3 || (uVar1 < uVar7)))) {
          uVar7 = uVar1;
          uVar3 = 0;
        }
        uVar1 = *(ushort *)(param_3 + 0xc) * uVar7;
        puVar6 = (undefined4 *)(iVar5 + (int)param_2);
        puVar8 = param_2;
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
      }
      uVar2 = local_1c;
      bVar9 = CARRY4(unaff_EBX,uVar7);
      unaff_EBX = unaff_EBX + uVar7;
      local_20 = local_20 + uVar3 + (uint)bVar9;
      iVar5 = *(int *)(unaff_ESI + 0x4d8);
      if (iVar5 == 0) {
        iVar5 = 0;
        puVar4 = (uint *)0x0;
      }
      else {
        *(undefined4 *)(unaff_ESI + 0x4dc) = 1;
        *(undefined4 *)(unaff_ESI + 0x4d8) = 0;
        puVar4 = &local_14;
      }
      local_10 = local_18;
      local_14 = local_1c;
      (**(code **)(**(int **)(unaff_ESI + 0x4b8) + 0x7c))
                (*(int **)(unaff_ESI + 0x4b8),param_2,*(ushort *)(iStack_4 + 0xc) * uVar7,puVar4,
                 iVar5);
      local_10 = uVar2 + uVar7;
      local_c = local_c + uVar3 + (uint)CARRY4(uVar2,uVar7);
    } while (((int)local_14 < param_10) || (((int)local_14 <= param_10 && (local_18 < param_9))));
  }
  return 0;
}


