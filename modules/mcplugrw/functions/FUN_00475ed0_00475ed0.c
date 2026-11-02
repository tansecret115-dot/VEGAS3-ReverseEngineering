/* Module: mcplugrw.dll
   Function: FUN_00475ed0
   Address: 00475ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00475ed0(int *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte local_10 [4];
  byte local_c [4];
  byte local_8;
  byte bStack_7;
  char cStack_6;
  char cStack_5;
  byte local_4;
  
  if (param_1[0x18] != 0) {
    FUN_00475b50(param_1,"Out of place IHDR");
  }
  if (param_3 != 0xd) {
    FUN_00475b50(param_1,"Invalid IHDR chunk");
  }
  param_1[0x18] = param_1[0x18] | 1;
  FUN_00475d90(param_1,local_10,0xd);
  FUN_00475dc0(param_1,0);
  uVar2 = FUN_00475d40(local_10);
  uVar3 = FUN_00475d40(local_c);
  if ((((uVar2 == 0) || (0x7fffffff < uVar2)) || (uVar3 == 0)) || (0x7fffffff < uVar3)) {
    FUN_00475b50(param_1,"Invalid image size in IHDR");
  }
  if (((local_8 != 1) && (local_8 != 2)) &&
     ((local_8 != 4 && ((local_8 != 8 && (local_8 != 0x10)))))) {
    FUN_00475b50(param_1,"Invalid bit depth in IHDR");
  }
  if (((bStack_7 == 1) || (bStack_7 == 5)) || (6 < bStack_7)) {
    FUN_00475b50(param_1,"Invalid color type in IHDR");
  }
  if ((bStack_7 != 3) &&
     ((((bStack_7 == 2 || (bStack_7 == 4)) || (bStack_7 == 6)) && (local_8 < 8)))) {
    FUN_00475b50(param_1,"Invalid color type/bit depth combination in IHDR");
  }
  if (1 < local_4) {
    FUN_00475b50(param_1,"Unknown interlace method in IHDR");
  }
  if (cStack_6 != '\0') {
    FUN_00475b50(param_1,"Unknown compression method in IHDR");
  }
  if (cStack_5 != '\0') {
    FUN_00475b50(param_1,"Unknown filter method in IHDR");
  }
  *(byte *)((int)param_1 + 0x11b) = local_4;
  param_1[0x30] = uVar2;
  param_1[0x31] = uVar3;
  *(byte *)((int)param_1 + 0x11f) = local_8;
  *(byte *)((int)param_1 + 0x11e) = bStack_7;
  switch(bStack_7) {
  case 0:
  case 3:
    *(undefined1 *)((int)param_1 + 0x122) = 1;
    break;
  case 2:
    *(undefined1 *)((int)param_1 + 0x122) = 3;
    break;
  case 4:
    *(undefined1 *)((int)param_1 + 0x122) = 2;
    break;
  case 6:
    *(undefined1 *)((int)param_1 + 0x122) = 4;
  }
  bVar1 = *(char *)((int)param_1 + 0x122) * local_8;
  *(byte *)((int)param_1 + 0x121) = bVar1;
  param_1[0x34] = bVar1 * uVar2 + 7 >> 3;
  FUN_0044d7e0((int)param_1,param_2,uVar2,uVar3,local_8,bStack_7,local_4,cStack_6,cStack_5);
  return;
}


