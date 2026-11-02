/* Module: mpgmux.dll
   Function: FUN_10006620
   Address: 10006620
   Source: Ghidra pseudocode (Stage 10 batch) */


ulonglong __cdecl FUN_10006620(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint extraout_EDX;
  undefined8 uVar6;
  ulonglong uVar7;
  
  uVar6 = (**(code **)(param_2 + 4))(param_2,4);
  pcVar5 = (char *)uVar6;
  cVar1 = *pcVar5;
  if (cVar1 == -1) {
    *(uint *)(param_1 + 0x1c) = (byte)pcVar5[1] >> 1 & 3;
    *(uint *)(param_1 + 0x20) = (byte)pcVar5[1] & 1;
    *(uint *)(param_1 + 0x24) = (uint)((byte)pcVar5[2] >> 4);
    *(uint *)(param_1 + 0x28) = (byte)pcVar5[2] >> 2 & 3;
    *(uint *)(param_1 + 0x2c) = (uint)((byte)pcVar5[3] >> 6);
    *(uint *)(param_1 + 0x30) = (byte)pcVar5[3] >> 4 & 3;
    *(uint *)(param_1 + 0x34) = ((byte)pcVar5[3] & 8) >> 3;
    *(uint *)(param_1 + 0x38) = (byte)pcVar5[3] >> 2 & 1;
    *(uint *)(param_1 + 0x3c) = (byte)pcVar5[3] & 3;
    uVar7 = __ftol();
    *(int *)(param_1 + 0x14) = (int)uVar7;
    *(int *)(param_1 + 0x18) = (int)uVar7 + 1;
    return uVar7 & 0xffffffff00000000;
  }
  if ((cVar1 == '\v') && (pcVar5[1] == 'w')) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    bVar2 = pcVar5[4];
    *(uint *)(param_1 + 0x28) = (uint)(bVar2 >> 6);
    iVar3 = *(int *)(&DAT_10016fd0 + (((byte)pcVar5[4] >> 1 & 0x1f) + (uint)(bVar2 >> 6) * 0x20) * 4
                    );
    *(int *)(param_1 + 0x14) = iVar3 * 2;
    *(int *)(param_1 + 0x18) = iVar3 * 2 + 2;
    uVar4 = *(uint *)(&DAT_10016f50 + ((byte)pcVar5[4] >> 1 & 0x17) * 4);
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(uint *)(param_1 + 0x24) = uVar4;
    return (ulonglong)uVar4 << 0x20;
  }
  if ((cVar1 == 'C') && ((pcVar5[1] & 0xfeU) == 0x50)) {
    *(undefined4 *)(param_1 + 0x1c) = 4;
    *(uint *)(param_1 + 0x3c) = (byte)pcVar5[1] & 1;
    *(uint *)(param_1 + 0x28) = (byte)pcVar5[2] & 3;
    *(uint *)(param_1 + 0x38) = (uint)((byte)pcVar5[2] >> 7);
    *(uint *)(param_1 + 0x34) = (byte)pcVar5[2] >> 5 & 3;
    *(uint *)(param_1 + 0x2c) = ((byte)pcVar5[2] & 0x1c) >> 2;
    *(uint *)(param_1 + 0x30) = (uint)(byte)pcVar5[3];
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x28) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0xa0;
      *(undefined4 *)(param_1 + 0x24) = 0xbb800;
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = 0x140;
      *(undefined4 *)(param_1 + 0x24) = 0x177000;
    }
    if (*(int *)(param_1 + 0x2c) == 1) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 1;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) << 1;
    }
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) / 1000;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
    (**(code **)(param_2 + 0xc))(param_2,pcVar5,4);
    return (ulonglong)extraout_EDX << 0x20;
  }
  return CONCAT44((int)((ulonglong)uVar6 >> 0x20),0x10);
}


