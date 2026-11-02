/* Module: vidcap30.exe
   Function: FUN_0046fa20
   Address: 0046fa20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0046fa20(char *param_1,LPCSTR param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  iVar3 = -0x7fffbffb;
  if (*param_1 != '\0') {
    puVar4 = *(undefined4 **)(param_1 + 8);
    iVar3 = -0x7ffb1ff6;
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
      iVar3 = 0;
      local_8 = puVar4;
    }
  }
  if (-1 < iVar3) {
    iVar3 = FUN_0046fbd0(local_8,param_3,param_4);
    return iVar3;
  }
  return iVar3;
}


