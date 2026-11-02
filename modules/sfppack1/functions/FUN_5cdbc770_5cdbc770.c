/* Module: sfppack1.dll
   Function: FUN_5cdbc770
   Address: 5cdbc770
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdbc770(void *this,int param_1,double *param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 local_30 [12];
  
  iVar3 = FUN_5cdb9800(this,local_30);
  if ((((iVar3 != 0) || (*(int *)((int)this + 0x78) == 0)) && (param_1 != 2)) &&
     (iVar3 = FUN_5cdbd040(this,(int)local_30), iVar3 < 0)) {
    return iVar3;
  }
  if ((_DAT_5ce137a0 < *(double *)((int)this + 200)) && (*(int *)((int)this + 0x8c) != 0)) {
    psVar2 = *(short **)((int)this + 0x70);
    if (*psVar2 == 1) {
      sVar1 = psVar2[7];
      if (sVar1 == 8) {
        FUN_5cdc0dd0(this,(int)param_2,(uint)(ushort)psVar2[1],param_3);
        return 0;
      }
      if (sVar1 == 0x20) {
        FUN_5cdc0b50(this,(int *)param_2,(uint)(ushort)psVar2[1],param_3);
        return 0;
      }
      if (sVar1 == 0x10) {
        FUN_5cdc0ca0(this,(short *)param_2,(uint)(ushort)psVar2[1],param_3);
      }
    }
    else if (*psVar2 == 3) {
      if (psVar2[7] != 0x40) {
        FUN_5cdc0a50(this,(float *)param_2,(uint)(ushort)psVar2[1],param_3);
        return 0;
      }
      FUN_5cdc0950(this,param_2,(uint)(ushort)psVar2[1],param_3);
      return 0;
    }
  }
  return 0;
}


