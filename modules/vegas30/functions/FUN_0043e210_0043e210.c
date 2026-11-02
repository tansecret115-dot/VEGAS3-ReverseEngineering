/* Module: vegas30.exe
   Function: FUN_0043e210
   Address: 0043e210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_0043e210(void)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_005b89b0(DAT_0064b138);
  iVar3 = 0;
  iVar4 = 0;
  iVar5 = *piVar2;
  if (iVar5 != 0) {
    piVar2 = (int *)piVar2[2];
    do {
      puVar1 = (uint *)*piVar2;
      if (((byte *)puVar1[10] == (byte *)0x0) || ((*(byte *)puVar1[10] & 1) == 0)) {
        iVar3 = puVar1[2] + *puVar1;
        iVar4 = puVar1[3] + puVar1[1] + (uint)CARRY4(puVar1[2],*puVar1);
      }
      piVar2 = piVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return CONCAT44(iVar4,iVar3);
}


