/* Module: vegas30.exe
   Function: FUN_004411b0
   Address: 004411b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_004411b0(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  iVar3 = 0;
  iVar4 = 0;
  uVar5 = 0;
  if (*param_1 != 0) {
    piVar6 = (int *)param_1[2];
    while( true ) {
      puVar1 = (uint *)*piVar6;
      if (((byte *)puVar1[10] == (byte *)0x0) || ((*(byte *)puVar1[10] & 1) == 0)) break;
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
      if (*param_1 <= uVar5) {
        return 0;
      }
    }
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    if (((int)uVar2 < 1) && (((int)uVar2 < 0 || (uVar5 < 20000000)))) {
      iVar3 = 20000000 - uVar5;
      iVar4 = -(uint)(20000000 < uVar5) - uVar2;
    }
  }
  return CONCAT44(iVar4,iVar3);
}


