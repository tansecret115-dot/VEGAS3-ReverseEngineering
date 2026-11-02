/* Module: vegas30.exe
   Function: FUN_00501ee0
   Address: 00501ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00501ee0(undefined4 *param_1,uchar *param_2)

{
  HANDLE pvVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 local_12c;
  uchar local_104 [260];
  
  pcVar3 = "<?xml version=\"1.0\" standalone=\"yes\"?>";
  puVar4 = &local_12c;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar3;
  *(char *)((int)puVar4 + 2) = pcVar3[2];
  _mbscpy(local_104,param_2);
  pvVar1 = CreateFileA((LPCSTR)local_104,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0)
  ;
  *param_1 = pvVar1;
  if (pvVar1 == (HANDLE)0xffffffff) {
    return 0x8004e006;
  }
  FUN_00501c80(pvVar1,&local_12c);
  return 0;
}


