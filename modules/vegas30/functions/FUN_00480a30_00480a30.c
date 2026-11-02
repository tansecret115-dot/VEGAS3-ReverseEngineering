/* Module: vegas30.exe
   Function: FUN_00480a30
   Address: 00480a30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00480a30(undefined4 param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  char cVar11;
  undefined4 *puVar12;
  uint local_a0;
  int iStack_90;
  undefined1 local_84 [16];
  int iStack_74;
  double dStack_70;
  double dStack_68;
  undefined1 local_40 [12];
  int iStack_34;
  double dStack_30;
  double dStack_28;
  
  bVar3 = 0;
  local_a0 = 0;
  uVar5 = FUN_005ba4b0();
  FUN_005ba670(param_1,uVar5,local_84,local_40);
  uVar10 = 0;
  if (param_5 == 0) {
    return 0;
  }
  do {
    bVar1 = true;
    bVar2 = true;
    if ((param_2 != 0) &&
       (iVar6 = (**(code **)(*DAT_0064b510 + 0x90))(DAT_0064b510,param_4,uVar10,8,0,0), iVar6 == 0))
    {
      bVar1 = false;
    }
    if ((param_3 != 0) &&
       (iVar6 = (**(code **)(*DAT_0064b510 + 0x90))(DAT_0064b510,param_4,uVar10,0x1f,0,0),
       iVar6 == 0)) {
      bVar2 = false;
    }
    if ((bVar1) && (bVar2)) {
      uVar7 = (**(code **)(*DAT_0064b510 + 0x90))(DAT_0064b510,param_4,uVar10,0x24,0,0);
      (**(code **)(*DAT_0064b510 + 0x90))(DAT_0064b510,param_4,uVar10,0x25,0,0);
      puVar12 = (undefined4 *)&stack0xffffff50;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      (**(code **)(*DAT_0064b510 + 0x90))(DAT_0064b510,param_4,uVar10,0x2f,&stack0xffffff50,0x40);
      cVar8 = '\0';
      if ((double)uVar7 * dStack_68 == dStack_28 * 1.0) {
        cVar8 = '\x02';
      }
      else if ((double)uVar7 * dStack_68 == dStack_28 * 1.0 * _DAT_00610560) {
        cVar8 = '\x01';
      }
      if (iStack_90 == 1) {
        cVar8 = cVar8 + '\x02';
      }
      else if (iStack_90 == 0) {
        cVar8 = cVar8 + '\x01';
      }
      if (dStack_70 == dStack_30) {
        cVar4 = '\x02';
      }
      else {
        cVar4 = '\0';
      }
      if (dStack_68 == dStack_28) {
        cVar11 = '\x02';
      }
      else {
        cVar11 = '\0';
      }
      bVar9 = cVar8 + cVar4 + (uVar10 != 0) + cVar11 + ((iStack_74 != iStack_34) - 1U & 2);
      if (bVar3 < bVar9) {
        local_a0 = uVar10;
        bVar3 = bVar9;
      }
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < param_5);
  return local_a0;
}


