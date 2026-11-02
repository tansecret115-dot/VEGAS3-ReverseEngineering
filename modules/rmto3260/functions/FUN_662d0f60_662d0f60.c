/* Module: rmto3260.dll
   Function: FUN_662d0f60
   Address: 662d0f60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662d0f60(void *this,int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_14 [3];
  char *local_8;
  
  uVar3 = 0;
  local_8 = (char *)0x0;
  iVar1 = FUN_662d0970(&local_8,*(undefined4 **)(param_1 + 0x2e),
                       CONCAT22((short)((uint)this >> 0x10),(ushort)*(byte *)(param_1 + 0x2d)));
  if ((-1 < iVar1) && (local_8 != (char *)0x0)) {
    FUN_662ef160(local_14,local_8);
    iVar2 = FUN_662ef820(local_14,s_application_x_pn_realevent_6630a0bc);
    uVar3 = (uint)(iVar2 == 0);
    if ((uVar3 == 0) &&
       (iVar2 = FUN_662ef820(local_14,s_application_x_pn_multirate_reale_6630a094), iVar2 == 0)) {
      uVar3 = 1;
    }
    FUN_662d08d0(&local_8);
    FUN_662ef0f0(local_14);
  }
  *param_2 = uVar3;
  return iVar1;
}


