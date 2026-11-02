/* Module: mpgmux.dll
   Function: FUN_1000a3b0
   Address: 1000a3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1000a3b0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  undefined1 uVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  byte bVar13;
  undefined4 uVar14;
  
  uVar5 = *(uint *)(param_1 + 0x11ac);
  if (*(char *)(param_1 + 0x260c) == '\0') {
    pbVar4 = (byte *)0x0;
    pbVar3 = (byte *)0x0;
    goto LAB_1000a56c;
  }
  pbVar4 = (byte *)(param_1 + 0x25b8);
  FUN_1000c030(param_1,pbVar4,param_2,param_3);
  pbVar3 = (byte *)0x0;
  if (*(int *)(param_1 + 0x11a8) == 0) goto LAB_1000a56c;
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 < 2) {
    if (iVar2 == 1) {
      if (*(int *)(param_1 + 0x11b0) == 0) {
        if ((*(uint *)(param_1 + 0x11ac) & 1) == 0) goto LAB_1000a469;
        uVar5 = 1;
        if ((*(uint *)(param_1 + 0x11ac) & 2) == 0) goto LAB_1000a46e;
        *(undefined4 *)(param_1 + 0x11b0) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x11b0) = 0;
LAB_1000a469:
        uVar5 = 2;
LAB_1000a46e:
        *(undefined4 *)(param_1 + 0x11a8) = 0;
      }
      pbVar3 = (byte *)(param_1 + 0x25d0);
      FUN_1000c140(param_1,pbVar3,*(uint *)(param_1 + 0x14b4),'\x01',0,1,'\x01',1,1,
                   *(undefined1 *)(param_1 + 0x11b8),*(byte *)(param_1 + 0x11ba),
                   *(undefined4 *)(param_1 + 0x11bc),*(undefined1 *)(param_1 + 0x11b9),
                   *(byte *)(param_1 + 0x11bb),*(undefined4 *)(param_1 + 0x11c0),0xe0,1,
                   *(uint *)(param_1 + 0x11b4) >> 10,uVar5);
      goto LAB_1000a56c;
    }
    uVar1 = *(uint *)(param_1 + 0x11b4);
    uVar14 = *(undefined4 *)(param_1 + 0x11c0);
    bVar13 = *(byte *)(param_1 + 0x11bb);
    uVar12 = *(undefined1 *)(param_1 + 0x11b9);
    uVar11 = *(undefined4 *)(param_1 + 0x11bc);
    bVar10 = *(byte *)(param_1 + 0x11ba);
    uVar9 = *(undefined1 *)(param_1 + 0x11b8);
    bVar7 = *(int *)(param_1 + 0x48) == 0;
    bVar6 = true;
    bVar8 = 1;
  }
  else {
    bVar6 = iVar2 == 3;
    uVar1 = *(uint *)(param_1 + 0x11b4);
    uVar14 = *(undefined4 *)(param_1 + 0x11c0);
    bVar13 = *(byte *)(param_1 + 0x11bb);
    uVar12 = *(undefined1 *)(param_1 + 0x11b9);
    uVar11 = *(undefined4 *)(param_1 + 0x11bc);
    bVar10 = *(byte *)(param_1 + 0x11ba);
    uVar9 = *(undefined1 *)(param_1 + 0x11b8);
    bVar8 = 0;
    bVar7 = false;
  }
  pbVar3 = (byte *)(param_1 + 0x25d0);
  FUN_1000c140(param_1,pbVar3,*(uint *)(param_1 + 0x14b4),'\x01',bVar7,bVar8,bVar6,bVar6,1,uVar9,
               bVar10,uVar11,uVar12,bVar13,uVar14,0xe0,1,uVar1 >> 10,uVar5);
  *(undefined4 *)(param_1 + 0x11a8) = 0;
LAB_1000a56c:
  if (pbVar3 != (byte *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x11ac);
    if ((uVar1 & 1) == 0) {
      param_4 = param_4 + 3;
    }
    if ((uVar1 & 2) == 0) {
      param_4 = param_4 + 3;
    }
    if ((uVar1 & 4) == 0) {
      param_4 = param_4 + 3;
    }
  }
  iVar2 = 0;
  if ((*(int *)(param_1 + 0x2c) == 1) && (pbVar3 != (byte *)0x0)) {
    if ((uVar5 == 2) && (*(int *)(param_1 + 0x34) != 0)) {
      iVar2 = 0x14;
    }
    param_4 = param_4 + 3;
  }
  FUN_1000b590(param_1,(byte *)(param_1 + 400),pbVar4,pbVar3,param_4,param_4,0,0xbe,0,(byte *)0x0,0,
               0,0,0,0,0,'\0',(byte)uVar5,iVar2,(int *)0x0,0,0,0);
  if (*(char *)(param_1 + 0x11eb) != '\0') {
    uVar5 = *(uint *)(param_1 + 0x1190);
    uVar1 = (**(code **)(*(int *)(param_1 + 0x11f8) + 0xc))
                      (*(int *)(param_1 + 0x11f8),(byte *)(param_1 + 400),uVar5);
    if (uVar1 != uVar5) {
      FUN_100050f0(param_1,(byte *)s_Unable_to_write_to_program_file___10017918);
      return 0x10;
    }
    uVar1 = *(uint *)(param_1 + 0x80);
    *(uint *)(param_1 + 0x80) = uVar1 + uVar5;
    *(uint *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + (uint)CARRY4(uVar1,uVar5);
  }
  return 0;
}


