/* Module: vegas30.exe
   Function: FUN_00412850
   Address: 00412850
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00412850(int param_1,undefined4 param_2,LPCSTR param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  undefined1 local_104 [260];
  
  if ((((byte)*(uint *)(param_1 + 0xc) & 3) == 3) || ((*(uint *)(param_1 + 0xc) & 0x80) != 0)) {
    uVar1 = _SfGetUIFont_4(0x92);
    uVar2 = SfPrintF(local_104,&DAT_0061034c,param_2);
    _SfGetTextExtent_16(uVar1,local_104,uVar2,&local_114);
  }
  else {
    local_114 = 0;
    local_110 = 0;
  }
  piVar4 = &local_10c;
  iVar3 = lstrlenA(param_3);
  uVar1 = _SfGetUIFont_4(0x91);
  _SfGetTextExtent_16(uVar1,param_3,iVar3,piVar4);
  if (param_4 != (int *)0x0) {
    *param_4 = local_10c + local_114;
    if (local_110 <= local_108) {
      local_110 = local_108;
    }
    param_4[1] = local_110;
    return local_10c + local_114;
  }
  return local_10c + local_114;
}


