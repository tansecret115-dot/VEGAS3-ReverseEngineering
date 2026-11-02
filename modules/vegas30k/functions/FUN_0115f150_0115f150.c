/* Module: vegas30k.dll
   Function: FUN_0115f150
   Address: 0115f150
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0115f150(int *param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  puVar2 = *(ushort **)((int)param_1 + param_2 * 4 + 0x7d);
  if (puVar2 == (ushort *)0x0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x33;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  iVar5 = 0;
  iVar4 = 0x40;
  puVar3 = puVar2;
  do {
    if (0xff < *puVar3) {
      iVar5 = 1;
    }
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if ((char)puVar2[0x40] == '\0') {
    FUN_0115eea0(param_1,0xdb);
    FUN_0115eec0(param_1,(-(iVar5 != 0) & 0x40U) + 0x43);
    FUN_0115ee60(param_1,iVar5 * 0x10 + param_2);
    piVar6 = &DAT_011e9bf0;
    do {
      uVar1 = puVar2[*piVar6];
      if (iVar5 != 0) {
        FUN_0115ee60(param_1,uVar1 >> 8);
      }
      FUN_0115ee60(param_1,uVar1 & 0xff);
      piVar6 = piVar6 + 1;
    } while ((int)piVar6 < 0x11e9cf0);
    *(undefined1 *)(puVar2 + 0x40) = 1;
  }
  return iVar5;
}


