/* Module: vidcap30.exe
   Function: FUN_00523b50
   Address: 00523b50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00523b50(uchar *param_1,int param_2,uchar *param_3)

{
  uchar uVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  uchar *puVar5;
  uchar local_104 [260];
  
  _mbscpy(local_104,param_1);
  puVar2 = local_104;
  puVar5 = local_104;
  while ((local_104[0] != '\0' && (param_2 != 0))) {
    if (*puVar2 == '\\') {
      puVar5 = puVar2 + 1;
      param_2 = param_2 + -1;
    }
    puVar2 = (uchar *)CharNextA((LPCSTR)puVar2);
    local_104[0] = *puVar2;
  }
  uVar1 = *puVar5;
  puVar2 = puVar5;
  while ((uVar1 != '\0' && (uVar1 != '\\'))) {
    puVar2 = (uchar *)CharNextA((LPCSTR)puVar2);
    uVar1 = *puVar2;
  }
  uVar3 = (int)puVar2 - (int)puVar5;
  puVar2 = param_3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)puVar2 = *(undefined4 *)puVar5;
    puVar5 = puVar5 + 4;
    puVar2 = puVar2 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar2 = puVar2 + 1;
  }
  param_3[uVar3] = '\0';
  return;
}


