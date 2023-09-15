/*
    ผู้ใช้กรอกจำนวนที่ต้องการในอาเรย์ 2 มิติ พร้อมกับกรอกค่าลงไปในอาเรย์จนครบทุกค่า จากนั้นให้คุณทำการ Transpose ค่าในอาเรย์และแสดงผลบนหน้าจอ
    
    Test case:
        Array element : 
            2 3
        Input :
            9 8 7
            6 5 5
    Output:
        Array
            9 8 7
            6 5 5
        Array Transpose
            9 6
            8 5
            7 5

    Test case:
        Array element : 
            3 6
        Input :
            1 2 3 4 5 6
            7 8 9 10 11 12
            13 14 15 16 17 18
    Output:
        Array
            1 2 3 4 5 6
            7 8 9 10 11 12
            13 14 15 16 17 18
        Array Transpose
            1 7 13
            2 8 14
            3 9 15
            4 10 16
            5 11 17
            6 12 18
*/

#include <stdio.h>

int main() {
    
    int row , column , temp ;

    // สร้างarray พร้อมรับข้อมูล
    printf ( "Array element : \n" ) ;
    scanf ( "%d %d", &column , &row ) ;
    int array[ column ] [ row ] ;
    for ( int i = 0 ; i < column ; i++ ) {
        for ( int k = 0 ; k < row ; k++ ) {
            scanf ( "%d", &array[ i ] [ k ] ) ;
        } // end for
    } // end for

    // แสดงค่า array
    printf ( "Array\n" ) ;
    for ( int i = 0 ; i < column ; i++ ) {
        for ( int k = 0 ; k < row ; k++ ) {
            printf ( "%d", array[ i ] [ k ] ) ;
            if ( row > k + 1 ) {
                printf ( " " ) ;
            } // end if
        } // end for
        printf ( "\n" ) ;
    } // end for
    
    // หมุน array โดยสร้างอีกตัว
    temp = column ;
    column = row ;
    row = temp ;
    int arraytranspose[ column ] [ row ] ;
    for ( int i = 0 ; i < column ; i++ ) {
        for ( int k = 0 ; k < row ; k++ ) {
            arraytranspose[ i ] [ k ] = array[ k ] [ i ] ;
        } // end for   
    } // end for
    
    // แสดงค่า
    printf ( "Array Transpose\n" ) ;
    for ( int i = 0 ; i < column ; i++ ) {
        for ( int k = 0 ; k < row ; k++ ) {
            printf ( "%d", arraytranspose[ i ] [ k ] ) ;
            if ( row > k + 1 ) {
                printf ( " " ) ;
            } // end if
        } // end for
        printf ( "\n" ) ;
    } // end for
    
    return 0 ;
} // end main
