/* Module: rmbe3260.dll
   Function: FUN_66028fe0
   Address: 66028fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66028fe0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *this;
  int iVar6;
  int local_c;
  
  bVar3 = false;
  bVar4 = false;
  local_c = 0;
  this = (undefined4 *)(param_1 + 0x2c);
  do {
    iVar6 = 0;
    if (0 < (int)this[1]) {
      puVar5 = (undefined4 *)*this;
      do {
        piVar1 = (int *)*puVar5;
        if (*piVar1 == param_2) {
          piVar2 = (int *)*piVar1;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
            *piVar1 = 0;
          }
          FUN_6605d000(this,iVar6,1);
          operator_delete(piVar1);
          bVar4 = true;
          bVar3 = true;
          break;
        }
        iVar6 = iVar6 + 1;
        puVar5 = puVar5 + 1;
        bVar3 = bVar4;
      } while (iVar6 < (int)this[1]);
    }
    if (bVar3) {
      return 0;
    }
    this = this + 4;
    local_c = local_c + 1;
    if (8 < local_c) {
      return 0x80004005;
    }
  } while( true );
}


