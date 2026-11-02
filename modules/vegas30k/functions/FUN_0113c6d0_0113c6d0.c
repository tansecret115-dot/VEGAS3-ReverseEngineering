/* Module: vegas30k.dll
   Function: FUN_0113c6d0
   Address: 0113c6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0113c6d0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint local_10 [4];
  
  if (param_2 == 0) {
    iVar3 = *(int *)(param_1 + 0x160);
    if (*(int *)(iVar3 + 0x120) == 0) {
      *(undefined4 *)(iVar3 + 0x128) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x128) = 1;
    }
    if (*(int *)(param_1 + 0x174) != 0) {
      (**(code **)(**(int **)(param_1 + 0x13c) + 8))(*(int **)(param_1 + 0x13c));
      (**(code **)(**(int **)(param_1 + 0x138) + 8))(*(int **)(param_1 + 0x138));
      puVar2 = *(undefined4 **)(param_1 + 0x174);
      *(undefined4 **)(param_1 + 0x138) = puVar2;
      (**(code **)*puVar2)(puVar2,&DAT_011ed2d0,param_1 + 0x13c);
    }
    if (*(int *)(param_1 + 300) != 0) {
      FUN_01040210(*(int *)(param_1 + 300));
      *(undefined4 *)(param_1 + 300) = 0;
    }
    if (*(int *)(param_1 + 0x120) == 0) {
      *(undefined4 *)(param_1 + 0x128) = 0;
      *(undefined4 *)(param_1 + 0x160) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x128) = 1;
    *(undefined4 *)(param_1 + 0x160) = 0;
    return;
  }
  *(int *)(param_1 + 0x160) = param_2;
  if (*(int *)(param_2 + 0x120) == 0) {
    iVar3 = _SfAudio_IsEqualFormat_8
                      (*(undefined4 *)(*(int *)(param_1 + 0x11c) + 0x44),
                       *(undefined4 *)(*(int *)(param_2 + 0x11c) + 0x44));
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x128) = 0;
      return;
    }
    if (*(int *)(param_1 + 0x120) == 0) {
      return;
    }
    iVar3 = _SfAudio_IsEqualFormat_8
                      (*(undefined4 *)(*(int *)(param_1 + 0x120) + 0x44),
                       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x160) + 0x11c) + 0x44));
    if (iVar3 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x128) = 1;
    uVar4 = FUN_010401b0(*(undefined4 *)(param_1 + 0x120));
    *(undefined4 *)(param_1 + 300) = uVar4;
    return;
  }
  iVar3 = _SfAudio_IsEqualFormat_8
                    (*(undefined4 *)(*(int *)(param_1 + 0x11c) + 0x44),
                     *(undefined4 *)(*(int *)(param_2 + 0x120) + 0x44));
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x160) + 0x128) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x120) == 0) {
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x160) + 0x120) + 0x44);
    piVar1 = *(int **)(param_1 + 0x13c);
    (**(code **)(*piVar1 + 0x10))(piVar1,local_10);
    local_10[0] = (uint)*(ushort *)(iVar3 + 0xc);
    local_10[1] = 0;
    piVar5 = (int *)FUN_01135cc0(0,&stack0xffffffe8);
    piVar1 = *(int **)(param_1 + 0x13c);
    (**(code **)(*piVar1 + 8))(piVar1);
    (**(code **)(**(int **)(param_1 + 0x138) + 8))(*(int **)(param_1 + 0x138));
    *(int **)(param_1 + 0x138) = piVar5;
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  else {
    iVar3 = _SfAudio_IsEqualFormat_8
                      (*(undefined4 *)(*(int *)(param_1 + 0x120) + 0x44),
                       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x160) + 0x120) + 0x44));
    if (iVar3 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x120);
      *(undefined4 *)(param_1 + 0x128) = 1;
      goto LAB_0113c8be;
    }
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x160) + 0x120) + 0x44);
    piVar1 = *(int **)(param_1 + 0x13c);
    (**(code **)(*piVar1 + 0x10))(piVar1,local_10);
    local_10[0] = (uint)*(ushort *)(iVar3 + 0xc);
    local_10[1] = 0;
    piVar5 = (int *)FUN_01135cc0(0,&stack0xffffffe8);
    piVar1 = *(int **)(param_1 + 0x13c);
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x138);
    (**(code **)(*piVar1 + 8))(piVar1);
    (**(code **)(**(int **)(param_1 + 0x138) + 8))(*(int **)(param_1 + 0x138));
    *(int **)(param_1 + 0x138) = piVar5;
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  (**(code **)**(undefined4 **)(param_1 + 0x138))
            (*(undefined4 **)(param_1 + 0x138),&DAT_011ed2d0,param_1 + 0x13c);
  (**(code **)(*piVar5 + 8))(piVar5);
  *(undefined4 *)(param_1 + 0x128) = 1;
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x160) + 0x120);
LAB_0113c8be:
  uVar4 = FUN_010401b0(uVar4);
  *(undefined4 *)(param_1 + 300) = uVar4;
  *(undefined4 *)(*(int *)(param_1 + 0x160) + 0x128) = 0;
  return;
}


