/* Module: sfcdi.dll
   Function: FUN_5bf3bd40
   Address: 5bf3bd40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3bd40(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint local_4;
  
  puVar2 = param_1;
  iVar3 = 0;
  bVar1 = 0;
  do {
    FUN_5bf3bc40(puVar2,&param_1,1,&local_4);
    if (local_4 == 0) goto LAB_5bf3bdbe;
    switch(iVar3) {
    case 0:
      if ((char)param_1 == '\0') {
        iVar3 = 1;
      }
      break;
    case 1:
      iVar3 = (-(uint)((char)param_1 != '\0') & 0xfffffffe) + 2;
      break;
    case 2:
      if ((char)param_1 == '\x01') {
        iVar3 = 3;
      }
      else if ((char)param_1 != '\0') {
        iVar3 = 0;
      }
      break;
    case 3:
      bVar1 = 1;
      puVar2[1] = (uint)CONCAT11(1,(char)param_1);
LAB_5bf3bdbe:
      return (-(uint)bVar1 & 0x7fffbffb) + 0x80004005;
    }
  } while( true );
}


