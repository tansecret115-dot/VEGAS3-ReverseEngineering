/* Module: vegas30k.dll
   Function: FUN_0113b500
   Address: 0113b500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * __thiscall FUN_0113b500(int param_1,int *param_2,int param_3,int param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int *piVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *unaff_EBX;
  int *unaff_EDI;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  ushort uVar11;
  int *local_24 [3];
  int *piStack_18;
  int aiStack_14 [3];
  undefined4 auStack_8 [2];
  
  if (param_4 == 0) {
    (**(code **)(*param_2 + 4))();
    return param_2;
  }
  if (param_3 == 0) {
    param_3 = *(int *)(param_1 + 0x11c);
  }
  puVar3 = *(undefined2 **)(param_4 + 0x44);
  puVar9 = *(undefined4 **)(param_3 + 0x44);
  uStack_38 = (int *)0x0;
  iStack_3c = 0;
  uStack_44 = local_24;
  iStack_40 = 0;
  (**(code **)(**(int **)(param_1 + 0x13c) + 0x1c))(*(int **)(param_1 + 0x13c));
  auStack_8[0] = 0;
  piVar10 = uStack_38;
  (**(code **)(*uStack_38 + 0xc))(uStack_38,auStack_8);
  aiStack_14[0] = 0;
  (**(code **)(*piStack_18 + 0xc))(piStack_18);
  uVar6 = (**(code **)(*piStack_18 + 0x2c))(piStack_18);
  piVar4 = local_24[0];
  uVar6 = uVar6 / *(ushort *)(puVar9 + 3);
  (**(code **)(*local_24[0] + 0x10))();
  (**(code **)(*piVar10 + 0x10))(piVar10);
  iVar8 = *(int *)(puVar3 + 2);
  uVar11 = (ushort)((uint)unaff_EDI >> 0x10);
  if (puVar9[1] == iVar8) {
    uVar1 = *(ushort *)((int)puVar9 + 2);
    uVar5 = puVar3[1];
    piVar10 = unaff_EBX;
    uVar7 = uVar6;
    if (uVar1 != uVar5) {
      if (uVar1 < uVar5) {
        uVar5 = ((ushort)puVar3[7] >> 3) * uVar1;
        uStack_38 = (int *)CONCAT22(puVar3[7],uVar5);
        iStack_3c = (uint)uVar5 * iVar8;
        uStack_44 = (int **)CONCAT22(uVar1,*puVar3);
        unaff_EDI = (int *)((uint)uVar11 << 0x10);
        iStack_40 = iVar8;
        _SfAudio_Copy_24(&uStack_44,local_24[0],puVar9,unaff_EBX,uVar6,0x3f800000);
        _SfAudio_ChannelChange_20(local_24[0],puVar3[1],local_24[0],&uStack_44,uVar6);
        goto LAB_0113b869;
      }
      _SfAudio_ChannelChange_20(local_24[0],uVar5,unaff_EBX,puVar9,uVar6);
      iStack_40 = puVar9[1];
      uVar2 = *(undefined2 *)puVar9;
      uVar1 = (*(ushort *)((int)puVar9 + 0xe) >> 3) * puVar3[1];
      uStack_38 = (int *)CONCAT22(*(ushort *)((int)puVar9 + 0xe),uVar1);
      iStack_3c = (uint)uVar1 * iStack_40;
      puVar9 = &uStack_44;
      uStack_44 = (int **)CONCAT22(puVar3[1],uVar2);
      unaff_EDI = (int *)((uint)uVar11 << 0x10);
      piVar10 = local_24[0];
    }
  }
  else {
    if (puVar9[1] != 0) {
      ftol();
    }
    uVar7 = ftol();
    _SfAudio_Resample_20(puVar9,local_24[0],uVar7,unaff_EBX,uVar6);
    uVar1 = *(ushort *)((int)puVar9 + 2);
    uVar5 = puVar3[1];
    piVar10 = local_24[0];
    if (uVar1 != uVar5) {
      if (uVar1 < uVar5) {
        iStack_40 = *(int *)(puVar3 + 2);
        uVar5 = ((ushort)puVar3[7] >> 3) * uVar1;
        uStack_38 = (int *)CONCAT22(puVar3[7],uVar5);
        iStack_3c = (uint)uVar5 * iStack_40;
        uStack_44 = (int **)CONCAT22(uVar1,*puVar3);
        unaff_EDI = (int *)((uint)uVar11 << 0x10);
        _SfAudio_Copy_24(&uStack_44,local_24[0],puVar9,unaff_EBX,uVar7,0x3f800000);
        _SfAudio_ChannelChange_20(local_24[0],puVar3[1],local_24[0],&uStack_44,uVar7);
        uVar6 = uVar7;
        goto LAB_0113b869;
      }
      _SfAudio_ChannelChange_20(local_24[0],uVar5,unaff_EBX,puVar9,uVar7);
      iStack_40 = puVar9[1];
      uVar2 = *(undefined2 *)puVar9;
      uVar11 = (*(ushort *)((int)puVar9 + 0xe) >> 3) * puVar3[1];
      uStack_38 = (int *)CONCAT22(*(ushort *)((int)puVar9 + 0xe),uVar11);
      iStack_3c = (uint)uVar11 * iStack_40;
      puVar9 = &uStack_44;
      uStack_44 = (int **)CONCAT22(puVar3[1],uVar2);
      unaff_EDI = (int *)((uint)unaff_EDI & 0xffff0000);
      piVar10 = local_24[0];
    }
  }
  _SfAudio_Copy_24(puVar3,local_24[0],puVar9,piVar10,uVar7,0x3f800000);
  uVar6 = uVar7;
LAB_0113b869:
  (**(code **)(aiStack_14[0] + 0x30))(aiStack_14,(ushort)puVar3[6] * uVar6);
  iVar8 = (**(code **)(*unaff_EDI + 0x3c))(unaff_EDI);
  if (iVar8 == 0) {
    (**(code **)(*piVar4 + 0x40))(piVar4,1);
  }
  return piVar4;
}


