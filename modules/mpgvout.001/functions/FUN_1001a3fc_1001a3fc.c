/* Module: mpgvout.001
   Function: FUN_1001a3fc
   Address: 1001a3fc
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1001a3fc(int param_1,int *param_2,int *param_3,int *param_4,int param_5,int param_6,int param_7,
            int param_8,undefined4 param_9,undefined4 param_10,int param_11)

{
  char cVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  if ((*(byte *)(param_11 + 1) & 1) != 0) {
    return;
  }
  local_20 = 0;
  bVar4 = *(byte *)(param_11 + 1) & 8;
  iVar11 = param_7 >> 1;
  if ((bVar4 == 0) && (param_8 != 2)) goto LAB_1001a634;
  cVar1 = *(char *)(param_11 + 2);
  if ((cVar1 == '\x02') || (bVar4 == 0)) {
    uVar12 = 0;
    local_10 = (uint)*(short *)(param_11 + 0xe);
    local_14 = (uint)*(short *)(param_11 + 0xc);
    iVar9 = 0x10;
    iVar7 = 0;
    iVar6 = 0x10;
    iVar5 = 0;
    iVar8 = param_5;
    iVar10 = param_7;
LAB_1001a605:
    FUN_1001bad0(param_4,iVar5,iVar6,param_2,iVar7,iVar8,iVar9,param_6,iVar10,local_14,local_10,
                 uVar12);
  }
  else {
    if (cVar1 == '\x01') {
      iVar7 = 0;
      if (*(short *)(param_11 + 0x1c) != 0) {
        iVar7 = param_5;
      }
      FUN_1001bad0(param_4,0,0x20,param_2,iVar7,param_5 * 2,8,param_6,iVar11,
                   (int)*(short *)(param_11 + 0xc),(int)(*(short *)(param_11 + 0xe) >> 1),0);
      uVar12 = 0;
      local_10 = (uint)(*(short *)(param_11 + 0x16) >> 1);
      local_14 = (uint)*(short *)(param_11 + 0x14);
      iVar7 = 0;
      if (*(short *)(param_11 + 0x20) != 0) {
        iVar7 = param_5;
      }
LAB_1001a5fc:
      iVar8 = param_5 * 2;
      iVar9 = 8;
      iVar6 = 0x20;
      iVar5 = 0x10;
      iVar10 = iVar11;
      goto LAB_1001a605;
    }
    if (cVar1 == '\x03') {
      FUN_1001a728(param_1,(int *)&local_1c,(short *)(param_11 + 0x24),
                   (int)*(short *)(param_11 + 0xc),(int)(*(short *)(param_11 + 0xe) >> 1));
      iVar7 = param_5 * 2;
      FUN_1001bad0(param_4,0,0x20,param_2,0,iVar7,8,param_6,iVar11,(int)*(short *)(param_11 + 0xc),
                   (int)(*(short *)(param_11 + 0xe) >> 1),0);
      FUN_1001bad0(param_4,0x10,0x20,param_2,param_5,iVar7,8,param_6,iVar11,
                   (int)*(short *)(param_11 + 0xc),(int)(*(short *)(param_11 + 0xe) >> 1),0);
      FUN_1001bad0(param_4,0,0x20,param_2,param_5,iVar7,8,param_6,iVar11,local_1c,local_18,1);
      uVar12 = 1;
      iVar7 = 0;
      goto LAB_1001a5fc;
    }
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      (**(code **)(param_1 + 0x10))("Invalid motion_type.");
    }
  }
  local_20 = 1;
LAB_1001a634:
  if ((*(byte *)(param_11 + 1) & 4) != 0) {
    if (*(char *)(param_11 + 2) == '\x02') {
      sVar3 = *(short *)(param_11 + 0x12);
      sVar2 = *(short *)(param_11 + 0x10);
      iVar10 = 0x10;
      iVar8 = 0;
      iVar6 = 0x10;
      iVar5 = 0;
      iVar7 = param_5;
      iVar11 = param_7;
    }
    else {
      iVar7 = param_5 * 2;
      iVar8 = 0;
      if (*(short *)(param_11 + 0x1e) != 0) {
        iVar8 = param_5;
      }
      FUN_1001bad0(param_4,0,0x20,param_3,iVar8,iVar7,8,param_6,iVar11,
                   (int)*(short *)(param_11 + 0x10),(int)(*(short *)(param_11 + 0x12) >> 1),local_20
                  );
      sVar3 = *(short *)(param_11 + 0x1a) >> 1;
      sVar2 = *(short *)(param_11 + 0x18);
      iVar10 = 8;
      iVar8 = 0;
      if (*(short *)(param_11 + 0x22) != 0) {
        iVar8 = param_5;
      }
      iVar6 = 0x20;
      iVar5 = 0x10;
    }
    FUN_1001bad0(param_4,iVar5,iVar6,param_3,iVar8,iVar7,iVar10,param_6,iVar11,(int)sVar2,(int)sVar3
                 ,local_20);
  }
  return;
}


