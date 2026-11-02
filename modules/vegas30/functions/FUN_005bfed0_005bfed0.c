/* Module: vegas30.exe
   Function: FUN_005bfed0
   Address: 005bfed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005bfed0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined1 local_28 [8];
  undefined1 local_20 [32];
  
  if ((*(uint *)(param_1 + 0x10) & 0x800000) != 0) {
    local_2c = FUN_005be610(0,local_20);
    iVar3 = 0;
    if (0 < local_2c) {
LAB_005bff01:
      iVar1 = FUN_005be910(iVar3,local_20);
joined_r0x005bff11:
      do {
        iVar1 = iVar1 + -1;
        if (iVar1 < 0) goto LAB_005bff86;
        iVar2 = FUN_005bec40(iVar3,iVar1,local_20,0,0,0,&local_30,local_28);
        if (iVar2 != 0) {
          if (param_2 == 0) {
            if (local_30 != 0) {
              FUN_005bf120(iVar3,iVar1,local_20);
              goto joined_r0x005bff11;
            }
            puVar5 = (undefined4 *)0x0;
            puVar4 = (undefined1 *)0x0;
          }
          else {
            puVar5 = &local_38;
            puVar4 = local_28;
            local_38 = 0;
          }
          local_34 = 0;
          FUN_005bee80(iVar3,iVar1,local_20,0,puVar4,&local_34,puVar5,0);
        }
      } while( true );
    }
LAB_005bffa2:
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xff7fffff;
  }
  return;
LAB_005bff86:
  FUN_005bf6b0(iVar3,local_20,0);
  iVar3 = iVar3 + 1;
  if (local_2c <= iVar3) goto LAB_005bffa2;
  goto LAB_005bff01;
}


