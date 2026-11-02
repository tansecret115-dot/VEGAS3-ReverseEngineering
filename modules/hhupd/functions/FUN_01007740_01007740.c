/* Module: hhupd.exe
   Function: FUN_01007740
   Address: 01007740
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_01007740(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 4;
  *(undefined1 *)((int)param_1 + 0x2eb5) = 4;
  do {
    bVar1 = *(byte *)((int)param_1 + 0x2eb5);
    *(byte *)((int)param_1 + 0x2eb5) = bVar1 + 1;
    uVar3 = uVar3 + (1 << ((&DAT_010014c8)[bVar1] & 0x1f));
  } while (uVar3 < (uint)param_1[1]);
  iVar2 = (*(code *)param_1[3000])(param_1[1] + 0x105);
  *param_1 = iVar2;
  return (bool)('\x01' - (iVar2 == 0));
}


