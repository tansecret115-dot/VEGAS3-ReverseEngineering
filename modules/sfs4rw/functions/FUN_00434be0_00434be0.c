/* Module: sfs4rw.dll
   Function: FUN_00434be0
   Address: 00434be0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00434be0(void *param_1,LPCSTR param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  LPSTR local_20c;
  uchar local_208 [260];
  uchar local_104 [260];
  
  GetFullPathNameA(param_2,0x104,(LPSTR)local_208,&local_20c);
  FUN_0041cb20(local_208,local_104,0x104);
  GetVolumeInformationA
            ((LPCSTR)local_104,(LPSTR)0x0,0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
             (LPSTR)((int)param_1 + 0x8b8),0x80);
  *(undefined4 *)((int)param_1 + 0x20) = param_4;
  *(undefined4 *)((int)param_1 + 0x8a0) = 0;
  *(undefined4 *)((int)param_1 + 0x8a4) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = param_3;
  puVar3 = (undefined4 *)((int)param_1 + 0x30);
  for (iVar2 = 400; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)((int)param_1 + 0x68) = 0;
  _mbscpy((uchar *)((int)param_1 + 0x678),local_208);
  switch(param_3) {
  case 0:
    uVar1 = FUN_00434ee0(param_1,local_208);
    return uVar1;
  case 1:
    uVar1 = FUN_00434f60(param_1,(LPCSTR)local_208);
    return uVar1;
  case 2:
    uVar1 = FUN_00435010(param_1,local_208);
    return uVar1;
  case 3:
    uVar1 = FUN_004351d0(param_1,local_208);
    return uVar1;
  case 4:
    uVar1 = FUN_004353a0(param_1,(LPCSTR)local_208);
    return uVar1;
  case 5:
    uVar1 = FUN_00435430(param_1,local_208);
    return uVar1;
  default:
    FUN_0043c400(param_1,0xaaaaaaa1,(uchar *)"Open Main",(uchar *)0x0);
    return 0x80004001;
  }
}


