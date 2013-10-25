#if 0
# Polyglot initialization script
echo "## Date"
read FILEDATE
if [ "$FILEDATE" = "" ] ; then
    FILEDATE=`date +%y%m%d`
fi
echo $FILEDATE
echo "## Copy"
cp -i $0 "./"$FILEDATE".cpp"
echo "## Modify"
sed -i '/__data''begin__/,$!d' "./"$FILEDATE".cpp"
sed -i '1d' "./"$FILEDATE".cpp"
sed -i 's/__build''date__/'$FILEDATE'/g' "./"$FILEDATE".cpp"
# echo "## Open"
# xdg-open "./"$FILEDATE".cpp"
echo "## Fin"
read var
exit
#endif

// Classwork Template
// License :    WTFPL 2.0

// __databegin__
#if 0
# Polyglot build script
echo "## Apply"
echo $0
cp $0 ./main.cppgen
./build.sh
exit
#endif

// Classwork code __builddate__
// License :    WTFPL 2.0
// Build :      linux, gcc/g++

void work() {
    // Initialization
    //

    try {
        // Init
        int Input;

        // Run
        cout<<"????: ";
        Assert(cin>>Input, "Wrong input.");

        cout<<"????: "<<endl;
    } catch (runtime_error &Error) {
        cerr<<Error.what()<<endl;
    }
    FlushCIO();
}
