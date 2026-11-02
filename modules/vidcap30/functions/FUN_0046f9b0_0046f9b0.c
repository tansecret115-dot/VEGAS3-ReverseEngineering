/* Module: vidcap30.exe
   Function: FUN_0046f9b0
   Address: 0046f9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0046f9b0(char *param_1,LPCSTR param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (*param_1 != '\0') {
    puVar4 = *(undefined4 **)(param_1 + 8);
    bVar1 = *(byte *)(puVar4 + 6);
    while ((bVar1 & 2) != 2) {
      iVar2 = lstrcmpiA(param_2,(LPCSTR)*puVar4);
      if (iVar2 == 0) break;
      if (iVar2 < 0) {
        puVar4 = (undefined4 *)puVar4[4];
      }
      else {
        puVar4 = (undefined4 *)puVar4[5];
      }
      bVar1 = *(byte *)(puVar4 + 6);
    }
    if ((*(byte *)(puVar4 + 6) & 2) != 2) {
      uVar3 = FUN_0046fb80(puVar4);
      return uVar3;
    }
  }
  return 0xffffffff;
}


