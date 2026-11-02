/* Module: vidcap30.exe
   Function: FUN_00470380
   Address: 00470380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00470380(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  bVar1 = *(byte *)(puVar3 + 6);
  while( true ) {
    if ((bVar1 & 2) == 2) {
      return puVar3;
    }
    iVar2 = lstrcmpiA((LPCSTR)*param_2,(LPCSTR)*puVar3);
    if (iVar2 == 0) break;
    if (iVar2 < 0) {
      puVar3 = (undefined4 *)puVar3[4];
    }
    else {
      puVar3 = (undefined4 *)puVar3[5];
    }
    bVar1 = *(byte *)(puVar3 + 6);
  }
  return puVar3;
}


