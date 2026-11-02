/* Module: vegas30.exe
   Function: FUN_0057ca80
   Address: 0057ca80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0057ca80(LPCSTR param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *local_108;
  uchar local_104 [260];
  
  iVar3 = 0;
  local_108 = (int *)0x0;
  iVar1 = FUN_0057c810(&local_108);
  if (-1 < iVar1) {
    if (0 < *local_108) {
      do {
        puVar2 = (undefined4 *)(local_108[1] * iVar3 + local_108[2]);
        if (puVar2 == (undefined4 *)0x0) {
          iVar1 = -0x7fffbffb;
          goto LAB_0057cb0b;
        }
        _mbscpy(local_104,(uchar *)((int)puVar2 + 0x7a));
        iVar1 = lstrcmpA(param_1,(LPCSTR)local_104);
        if (iVar1 == 0) {
          for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
            *param_2 = *puVar2;
            puVar2 = puVar2 + 1;
            param_2 = param_2 + 1;
          }
          iVar1 = 0;
          goto LAB_0057cb0b;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *local_108);
    }
    iVar1 = 1;
  }
LAB_0057cb0b:
  if (local_108 != (int *)0x0) {
    _SfList_Destroy_4(local_108);
  }
  return iVar1;
}


