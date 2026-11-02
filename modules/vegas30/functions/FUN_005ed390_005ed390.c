/* Module: vegas30.exe
   Function: FUN_005ed390
   Address: 005ed390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005ed390(char *param_1,LPCSTR param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*param_1 != '\0') {
    puVar3 = *(undefined4 **)(param_1 + 8);
    bVar1 = *(byte *)(puVar3 + 6);
    while ((bVar1 & 2) != 2) {
      iVar2 = lstrcmpiA(param_2,(LPCSTR)*puVar3);
      if (iVar2 == 0) break;
      if (iVar2 < 0) {
        puVar3 = (undefined4 *)puVar3[4];
      }
      else {
        puVar3 = (undefined4 *)puVar3[5];
      }
      bVar1 = *(byte *)(puVar3 + 6);
    }
    if ((*(byte *)(puVar3 + 6) & 2) != 2) {
      return puVar3[2];
    }
  }
  return 0xffffffff;
}


