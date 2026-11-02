/* Module: sfmarket2.dll
   Function: FUN_004318c0
   Address: 004318c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004318c0(void *param_1,LPCSTR param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  LPSTR local_20c;
  uchar local_208 [260];
  uchar local_104 [260];
  
  GetFullPathNameA(param_2,0x104,(LPSTR)local_208,&local_20c);
  FUN_00420620(local_208,local_104,0x104);
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
    uVar1 = FUN_00431bc0(param_1,local_208);
    return uVar1;
  case 1:
    uVar1 = FUN_00431c40(param_1,(LPCSTR)local_208);
    return uVar1;
  case 2:
    uVar1 = FUN_00431cf0(param_1,local_208);
    return uVar1;
  case 3:
    uVar1 = FUN_00431eb0(param_1,local_208);
    return uVar1;
  case 4:
    uVar1 = FUN_00432080(param_1,(LPCSTR)local_208);
    return uVar1;
  case 5:
    uVar1 = FUN_00432110(param_1,local_208);
    return uVar1;
  default:
    FUN_004390e0(param_1,0xaaaaaaa1,(uchar *)"Open Main",(uchar *)0x0);
    return 0x80004001;
  }
}


