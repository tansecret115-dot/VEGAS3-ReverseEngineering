/* Module: rmto3260.dll
   Function: FUN_662c1b90
   Address: 662c1b90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c1b90(int param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = -1;
  pcVar4 = param_2;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (0xff < (ushort)(~(ushort)iVar3 - 1)) {
    return 0x8004000d;
  }
  FUN_662d08d0((undefined4 *)(param_1 + 0x28));
  uVar2 = FUN_662d08f0((undefined4 *)(param_1 + 0x28),param_2);
  return uVar2;
}


