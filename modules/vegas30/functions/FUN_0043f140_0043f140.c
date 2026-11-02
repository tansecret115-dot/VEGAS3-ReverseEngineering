/* Module: vegas30.exe
   Function: FUN_0043f140
   Address: 0043f140
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043f140(uint param_1,int param_2,uchar *param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uchar *_Source;
  int *local_38;
  uint local_34;
  uchar local_2c [20];
  undefined4 local_18 [2];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar2 = (uint *)FUN_005b89b0(DAT_0064b138);
  uVar5 = 0;
  iVar4 = 0;
  uVar6 = 0;
  local_34 = 0;
  if (*puVar2 != 0) {
    local_38 = (int *)puVar2[2];
    do {
      puVar1 = (uint *)*local_38;
      if (((byte *)puVar1[10] == (byte *)0x0) || ((*(byte *)puVar1[10] & 1) == 0)) {
        uVar6 = *puVar1;
        uVar5 = puVar1[1];
        iVar4 = iVar4 + 1;
        iVar3 = puVar1[3] + uVar5 + (uint)CARRY4(puVar1[2],uVar6);
        if ((param_2 < iVar3) || ((param_2 <= iVar3 && (param_1 < puVar1[2] + uVar6)))) break;
      }
      local_34 = local_34 + 1;
      local_38 = local_38 + 1;
    } while (local_34 < *puVar2);
  }
  SfPrintF(param_3,&DAT_00611f40,iVar4);
  if ((param_2 < (int)uVar5) || ((param_2 <= (int)uVar5 && (param_1 < uVar6)))) {
    iVar4 = uVar6 - param_1;
    _Source = "-";
    iVar3 = (uVar5 - param_2) - (uint)(uVar6 < param_1);
  }
  else {
    iVar4 = param_1 - uVar6;
    _Source = "+";
    iVar3 = (param_2 - uVar5) - (uint)(param_1 < uVar6);
  }
  _mbscat(param_3,_Source);
  local_18[0] = 0;
  _SfNanoTimeToHMSF_20(iVar4,iVar3,local_18,0,0x4052c000);
  SfPrintF(local_2c,"%02d:%02d:%02d",local_10,local_c,local_8);
  _mbscat(param_3,local_2c);
  return;
}


