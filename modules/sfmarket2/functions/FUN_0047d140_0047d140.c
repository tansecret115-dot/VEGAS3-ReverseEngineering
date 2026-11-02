/* Module: sfmarket2.dll
   Function: FUN_0047d140
   Address: 0047d140
   Source: Ghidra pseudocode (Stage 10 batch) */


char FUN_0047d140(int *param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  bool bVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  
  puVar2 = *(ushort **)((int)param_1 + param_2 * 4 + 0x7d);
  if (puVar2 == (ushort *)0x0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x33;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  bVar3 = false;
  iVar5 = 0x40;
  puVar4 = puVar2;
  do {
    if (0xff < *puVar4) {
      bVar3 = true;
    }
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if ((char)puVar2[0x40] == '\0') {
    FUN_0047ce90(param_1,0xdb);
    FUN_0047ceb0(param_1,(-(uint)bVar3 & 0x40) + 0x43);
    FUN_0047ce50(param_1,bVar3 * '\x10' + (char)param_2);
    piVar6 = &DAT_004a3b84;
    do {
      uVar1 = puVar2[*piVar6];
      if (bVar3) {
        FUN_0047ce50(param_1,(char)(uVar1 >> 8));
      }
      FUN_0047ce50(param_1,(char)uVar1);
      piVar6 = piVar6 + 1;
    } while ((int)piVar6 < 0x4a3c84);
    *(undefined1 *)(puVar2 + 0x40) = 1;
  }
  return bVar3;
}


